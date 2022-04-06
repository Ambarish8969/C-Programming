// Para Constructor.

class Admin{
   private String adminId;
   private String email;
   private String firstname;
   private String lastname;
   private String password;
    
    public Admin(){
        super();
    }
    public Admin(String adminId, String email,String firstname,String lastname,String password){
        this.adminId=adminId;
        this.email=email;
        this.firstname=firstname;
        this.lastname=lastname;
        this.password=password;
    }
    public String getAdminId(){
        return this.adminId;
    }
    public void setAdminId(String adminId){
        this.adminId=adminId;
    }
    public String getEmail(){
        return this.email;
    }
    public void setEmail(String email){
        this.email=email;
    }
    public String getFirstname(){
        return this.firstname;
    }
    public void setFirstname(String firstname){
        this.firstname=firstname;
    }
    public String getLastname(){
        return this.lastname;
    }
    public void setLastname(String lastname){
        this.lastname=lastname;
    }
    public String getPassword(){
        return this.password;
    }
    public void setPassword(String password){
        this.password=password;
    }
}
class Address{
   private String city;
   private String state;
   private int zip;
   private String country;

   public Address(){
       super();
   }
   public Address(String city,String state, int zip, String country){
        this.city=city;
        this.state=state;
        this.zip=zip;
        this.country=country;
   }
   public String getCity(){
        return this.city;
    }
    public void setcity(String city){
        this.city=city;
    }
    public String getState(){
        return this.state;
    }
    public void setState(String state){
        this.state=state;
    }
    public int getZip(){
        return this.zip;
    }
    public void setZip(int zip){
        this.zip=zip;
    }
    public String getCountry(){
        return this.country;
    }
    public void setCountry(String country){
        this.country=country;
    }
    @Override
    public String toString(){
        return "Address[city="+this.city+", state="+this.state+", zip="+this.zip+", country="+this.country+"]";
    }
}
class User{
    private int userId;
    private String emailId;
    private String password;
    private String firstname;
    private String lastname;
    private String city;
    private String gender;
    private int phonenumber;
    private Address address;
    public User(){
        super();
    }
    public User(int userId,String emailId,String password, String firstname,String lastname,String city,String gender,int phonenumber,Address address){
        this.userId=userId;
        this.emailId=emailId;
        this.password=password;
        this.firstname=firstname;
        this.lastname=lastname;
        this.city=city;
        this.gender=gender;
        this.phonenumber=phonenumber;
        this.address=address;
    }
    @Override
    public String toString(){
        return "User [userId="+this.userId+", emailId="+this.emailId+", password="+this.password+",firstname="+this.firstname+", lastname="+this.lastname+", city="+this.city+", gender="+this.gender+", phonenumber="+this.phonenumber+", address="+this.address+"]";
    }
}
class Ride{
   private String rideid;
   private String frontlocation;
   private String tolocation;
   private String seatsleft;
   private String totalseats;
   private String starttime;
   private String endtime;
   private String isstared;
   private String finished;
   private User rideprovider; 

    public Ride(){
        super();
    }
    public Ride(String rideid,String frontlocation,String tolocation,String seatsleft,String totalseats,String starttime,String endtime,String isstared,String finished,User rideprovider){
        this.rideid=rideid;
        this.frontlocation=frontlocation;
        this.tolocation=tolocation;
        this.seatsleft=seatsleft;
        this.totalseats=totalseats;
        this.starttime=starttime;
        this.endtime=endtime;
        this.isstared=isstared;
        this.finished=finished;
        this.rideprovider=rideprovider;
    }
    public String getRideid(){
        return this.rideid;
    }
    public void setRideid(String rideid){
        this.rideid=rideid;
    }
    public String getFrontlocation(){
        return this.frontlocation;
    }
    public void setfrontlocation(String frontlocation){
        this.frontlocation=frontlocation;
    }
    public String getTolocation(){
        return this.tolocation;
    }
    public void setTolocation(String tolocation){
        this.tolocation=tolocation;
    }
    public String getSeatsleft(){
        return this.seatsleft;
    }
    public void setSeatsleft(String seatsleft){
        this.seatsleft=seatsleft;
    }
    public String getTotalseats(){
        return this.totalseats;
    }
    public void setTotalseats(String totalseats){
        this.totalseats=totalseats;
    }
    public String getStarttime(){
        return this.starttime;
    }
    public void setStarttime(String starttime){
        this.starttime=starttime;
    }
    public String getEndtime(){
        return this.endtime;
    }
    public void setEndtime(String endtime){
        this.endtime=endtime;
    }
    public String getIsstarted(){
        return this.isstared;
    }
    public void setIsstarted(String isstared){
        this.isstared=isstared;
    }
    public String getFinished(){
        return this.finished;
    }
    public void setFinished(String finished){
        this.finished=finished;
    }
    public User getRideprovider(){
        return this.rideprovider;
    }
    public void setRideprovider(User rideprovider){
        this.rideprovider=rideprovider;
    }
    
    @Override
    public String toString(){
        return "Ride [rideid="+this.rideid+", frontlocation="+this.frontlocation+", tolocation="+this.tolocation+", seatsleft="+this.seatsleft+", totalseats="+this.totalseats+", starttime="+this.starttime+", endtime="+this.endtime+", isstared="+this.isstared+",finished="+this.finished+", rideprovider="+this.rideprovider+"]";
    }
}
public class para {
    public static void main(String[] args) {
        
    }
}
