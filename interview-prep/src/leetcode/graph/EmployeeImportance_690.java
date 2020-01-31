package leetcode.graph;
import java.util.*;

// Employee info
class Employee {
    // It's the unique id of each node;
    // unique id of this employee
    public int id;
    // the importance value of this employee
    public int importance;
    // the id of direct subordinates
    public List<Integer> subordinates;
};

public class EmployeeImportance_690 {
    public int getImportance(List<Employee> employees, int id) {
        Employee e = findEmployeeById(employees,id);
        int totalImportance = computeTotalImportance(employees,e);
        return totalImportance;
    }
    Employee findEmployeeById(List<Employee> employees, int id){
        Employee e = null;
        for(Employee emp  : employees){
            if(emp.id == id){
                e = emp;
                break;
            }
        }
        return e;
    }
    int computeTotalImportance(List<Employee> employees, Employee e){
        int totalImportance = 0;
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(e.id);
        while(!queue.isEmpty()){
            int currentEmployeeId = queue.poll();
            Employee currentEmployee = findEmployeeById(employees, currentEmployeeId);
            totalImportance +=currentEmployee.importance;
            for(int subordinate : currentEmployee.subordinates){
                queue.offer(subordinate);
            }
        }
        return totalImportance;
    }
}
