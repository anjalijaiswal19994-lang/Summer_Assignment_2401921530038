package live;

import music.Playable;
import music.string.Veena;
import music.string.Saxophone;

public class Test {
    public static void main(String[] args) {
        Veena v1 = new Veena();
        v1.play();
        Saxophone s1 = new Saxophone();
        s1.play();

        Playable p1 = new Veena();
        p1.play();

        Playable p2 = new Saxophone();
        p2.play();
    }

}
