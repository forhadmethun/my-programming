package structural.adapter.newadapter;

public class OMSAdapter {
    NewOMS newOMS = null;
    public OMSAdapter(){
        newOMS = new NewOMS();
    }
    public void addItem(Item itemXML){
        convertXMLToJSON(itemXML);
        newOMS.addItem(itemXML);
    }
    public void makePayment(Payment paymentXML){
        convertXMLToJSON(paymentXML);
        newOMS.makePayment(paymentXML);
    }
    private void convertXMLToJSON(Object o){
        System.out.println("Converted from XML to JSON");
    }
}
