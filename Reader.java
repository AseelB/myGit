/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projectse;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author mhramadhan
 */
public class Reader {
    
    public byte[] readFile(String file)
    {
        byte[] b = null;
        Path path = Paths.get("path/to/file");
        try {
            b = Files.readAllBytes(path);
        } catch (IOException ex) {
            Logger.getLogger(Reader.class.getName()).log(Level.SEVERE, null, ex);
        }
    return b;
    }
}
