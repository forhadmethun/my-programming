import jdk.nashorn.internal.scripts.JO;

import java.io.*;
import java.util.*;

class StringManipulator {
    static String inputPath = "/media/forhad/Development/MyCodes/Code/Others/general-topics/misc-concept/string-manipulation/src/files/input";
    static String outputPath = "/media/forhad/Development/MyCodes/Code/Others/general-topics/misc-concept/string-manipulation/src/files/output";
    public static void main(String[] args) throws Exception {

        Collection<File> fileCollection = listFileTree(new File(inputPath));
        for (File file : fileCollection) {
            if(file.getAbsolutePath().endsWith(".csv"))
            handleStringManipulation(file);
//            System.out.println(file.getAbsolutePath());
        }
//        handleStringManipulation();

//        System.out.println(lines.get(0));
    }

    private static void handleStringManipulation(File file) throws Exception{

        String path = file.getAbsolutePath();

        BufferedReader reader = new BufferedReader(new FileReader(path));
//        BufferedReader reader = new BufferedReader(new FileReader("/media/forhad/Development/MyCodes/Code/Others/general-topics/misc-concept/string-manipulation/src/train-combined-0.99.csv"));


        String ANGER = "Anger";
        String ANTICIPATION = "Anticipation";
        String DISGUST = "Disgust";
        String SURPRISE = "Surprise";
        String JOY = "Joy";
        String FEAR = "Fear";
        String SADNESS = "Sadness";
        String TRUST = "Trust";

        ArrayList<String> emoticons = new ArrayList<>();
        emoticons.add(ANGER);
        emoticons.add(ANTICIPATION);
        emoticons.add(DISGUST);
        emoticons.add(SURPRISE);
        emoticons.add(JOY);
        emoticons.add(FEAR);
        emoticons.add(SADNESS);
        emoticons.add(TRUST);

        List<String> lines = new ArrayList<>();

        Map<String, ArrayList<String>> stringArrayListMap = new HashMap<>();
        emoticons.forEach(e->{
            stringArrayListMap.put(e,new ArrayList<>());
        });

        String line = null;
        while ((line = reader.readLine()) != null) {
            for(String e: emoticons){
//            emoticons.forEach(e->{
                populateMapData(stringArrayListMap,e,line,emoticons);
            }
//            );
//            lines.add((line.replace("\t","")).replace("-",""));
        }
        printMapData(stringArrayListMap,outputPath+"/"+file.getName().replace(".csv","-" + "out.txt"));
    }

    public static FileWriter fw;
    private static void printMapData(Map<String, ArrayList<String>> stringArrayListMap,String path) throws IOException {
        fw  = new FileWriter(path);
        stringArrayListMap.keySet().forEach(k->{
            stringArrayListMap.get(k).forEach(e->{
//                System.out.println(k + " : " + e);
                try {
                    fw.write(k+ " : " + e+"\n");
                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            });
        });
        fw.close();
    }

    private static void populateMapData(Map<String, ArrayList<String>> stringArrayListMap, String e, String line, ArrayList<String> emoticons) {
        if (line.contains(e)) {
            String tempString = new String(line);
            for(String emo: emoticons){
                tempString = new String(tempString.replace(emo,""));
            }
            String regEx = "(@.([^\\s]+))";
            stringArrayListMap.get(e).add(modifiedString(tempString,e).replaceAll(regEx,""));
        }
    }

    static String modifiedString(String line, String emo){
        return (line.replace("\t","")).replace("-","").replace(emo,"");
    }

    public static Collection<File> listFileTree(File dir) {
        Set<File> fileTree = new HashSet<File>();
        if(dir==null||dir.listFiles()==null){
            return fileTree;
        }
        for (File entry : dir.listFiles()) {
            if (entry.isFile()) fileTree.add(entry);
            else fileTree.addAll(listFileTree(entry));
        }
        return fileTree;
    }
}
