object HeartRate {
    def main(args: Array[String]) {
        var n = scala.io.StdIn.readInt()
        while(n>0) {
            var Array(b, p) = scala.io.StdIn.readLine().split(" ").map(_.toDouble)
            var x = 60.0 / p
            var xb = x * b
            n -= 1
            print(xb-x + " ")
            print(xb + " ")
            print(xb+x)
            println()
        }
    }
}
