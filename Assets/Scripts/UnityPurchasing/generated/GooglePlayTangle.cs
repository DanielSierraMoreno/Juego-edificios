// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("ab3CwhoH2DGhSuV3Gzoqb7q5Y2djKRciHNCZOFLb2/L//JT8r1L4+kap1QCLp7Sl8RNUnzbsx/rp8icGgr9mjhGUd4kw0/807XHegOWRbRmPk+tZ5KDAIRPgwI2XrF5bIDeJ+2mtMwdaYjI0u71hrVakIK9yu79GJJYVNiQZEh0+klyS4xkVFRURFBc7lwMnDUfXpl8F23ScyD0mnItooxymGZO3++Lx/zUiUEKOxD/PPs+DKe/FTH/y/MPO3aYM0vgWhNZjfmOhN4psxFG0zOHxbLmTkV4rUyof7lIjOlHZDzX1oIpoTgiTglm6X3EIlhUbFCSWFR4WlhUVFMUEZt+pyO2J0wKvC0y8tX9bprdmnNw2dPDEle5shzgZbFXKOxYXFRQV");
        private static int[] order = new int[] { 7,10,4,4,13,11,7,13,8,13,11,12,12,13,14 };
        private static int key = 20;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
