using System;

class ProgramCsharp
{
    class programing
    {
        /* ##  Static Variable  ## */
        static double Side;
        static double Volume;
        static double Width;
        static double Length;
        static double Height;
        static double Radius;
        static double BaseArea;
        

        /*  ##  CUBE METHOD  ##  */
        static void Cube(){
            Console.WriteLine("=================================");
            Console.WriteLine("##  Calculate __CUBE__ Volume  ##");
            Console.WriteLine("=================================");

            Console.WriteLine();

            Console.Write("Enter the Sides of the cube: ");
            Side = double.Parse(Console.ReadLine());

            Volume = Side * Side * Side;

            Console.Write("Cube Volume is " + Volume.ToString("F2"));
        }

        /*  ##  BLOCK METHOD  ##  */
        static void Block(){
            Console.WriteLine("==================================");
            Console.WriteLine("##  Calculate __BLOCK__ Volume  ##");
            Console.WriteLine("==================================");

            Console.WriteLine();

            Console.Write("Enter Length: ");
            Length = double.Parse(Console.ReadLine());
            Console.Write("Enter Width: ");
            Width = double.Parse(Console.ReadLine());
            Console.Write("Enter Height: ");
            Height = double.Parse(Console.ReadLine());

            Volume = Length * Width * Height;

            Console.WriteLine("Block Volume is " + Volume.ToString("F2"));
        }

        /*  ##   BALL METHOD  ##  */
        static void Ball(){
            Console.WriteLine("=================================");
            Console.WriteLine("##  Calculate __BALL__ Volume  ##");
            Console.WriteLine("=================================");

            Console.WriteLine();

            Console.Write("Enter ball Radius: ");
            Radius = double.Parse(Console.ReadLine());

            Volume = (4.0 / 3.0) * Math.PI * Math.Pow(Radius, 3);

            Console.WriteLine("Ball Volume is " + Volume.ToString("F2"));
        }

        /*  ##   TUBE METHOD  ##  */
        static void Tube(){
            Console.WriteLine("=================================");
            Console.WriteLine("##  Calculate __TUBE__ Volume  ##");
            Console.WriteLine("=================================");

            Console.WriteLine();

            Console.Write("Enter ball Radius: ");
            Radius = double.Parse(Console.ReadLine());
            Console.Write("Enter ball Height: ");
            Height = double.Parse(Console.ReadLine());

            Volume = Math.PI * Math.Pow(Radius, 2) * Height;

            Console.WriteLine("Tube Volume is " + Volume.ToString("F2"));
        }

        /*  ##   CONE METHOD  ##  */
        static void Cone(){
            Console.WriteLine("=================================");
            Console.WriteLine("##  Calculate __CONE__ Volume  ##");
            Console.WriteLine("=================================");

            Console.WriteLine();

            Console.Write("Enter Radius: ");
            Radius = double.Parse(Console.ReadLine());
            Console.Write("Enter Height: ");
            Height = double.Parse(Console.ReadLine());

            Volume = (1.0 / 3.0) * Math.PI * Math.Pow(Radius, 2) * Height;

            Console.WriteLine("Cone Volume is " + Volume.ToString("F2"));
        }

        /*  ##   PYRAMID METHOD  ##  */
        static void Pyramid(){
            Console.WriteLine("=================================");
            Console.WriteLine("##  Calculate __PYRAMID__ Volume  ##");
            Console.WriteLine("=================================");

            Console.WriteLine();

            Console.Write("Enter base area: ");
            BaseArea = double.Parse(Console.ReadLine());
            Console.Write("Enter Height: ");
            Height = double.Parse(Console.ReadLine());

            Volume = (1.0 / 3.0) * BaseArea * Height;

            Console.WriteLine("Base area Pyramid is " + Volume.ToString("F2"));
        }

        /*  ##   PRISM METHOD  ##  */
        static void Prism(){
            Console.WriteLine("==================================");
            Console.WriteLine("##  Calculate __PRISM__ Volume  ##");
            Console.WriteLine("==================================");

            Console.WriteLine();

            Console.Write("Enter base area: ");
            BaseArea = double.Parse(Console.ReadLine());
            Console.Write("Enter Height: ");
            Height = double.Parse(Console.ReadLine());

            Volume = BaseArea * Height;

            Console.WriteLine("Base area prism is " + Volume.ToString("F2"));
        }

        /*  ##   CIRCLE METHOD  ##  */
        static void Circle(){
            Console.WriteLine("===================================");
            Console.WriteLine("##  Calculate __CIRCLE__ Volume  ##");
            Console.WriteLine("===================================");

            Console.WriteLine();

            Console.Write("Enter Radius: ");
            Radius = double.Parse(Console.ReadLine());

            BaseArea = Math.PI * Math.Pow(Radius, 2);

            Console.WriteLine("Circle area base is " + BaseArea.ToString("F2"));
        }


        /*  ##   MAIN  ##  */
        static void Main(string[] args)
        {
            int Choice;

            Console.WriteLine("============================");
            Console.WriteLine("##  C++ Geometric Volume  ##");
            Console.WriteLine();
            Console.WriteLine("1 Cube Volume");
            Console.WriteLine("2 Block Volume");
            Console.WriteLine("3 Ball Volume");
            Console.WriteLine("4 Tube Volume");
            Console.WriteLine("5 Cone Volume");
            Console.WriteLine("6 Pyramid Volume");
            Console.WriteLine("7 Prism Volume");
            Console.WriteLine("8 Circle area");
            Console.WriteLine("0 End Program");
            Console.WriteLine();
            Console.WriteLine("============================");

            Console.WriteLine();

            Console.Write("Select the number above: ");
            Choice = Convert.ToInt32(Console.ReadLine());
            
            Console.WriteLine();

            switch(Choice){
                case 1: Cube(); break;
                case 2: Block(); break;
                case 3: Ball(); break;
                case 4: Tube(); break;
                case 5: Cone(); break;
                case 6: Pyramid(); break;
                case 7: Prism(); break;
                case 8: Circle(); break;
                default:
                Console.WriteLine("Program End.");
                return;
            }
        }
    }
}
