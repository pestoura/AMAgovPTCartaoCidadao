/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.35
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace be.portugal.eid {

using System;
using System.Runtime.InteropServices;

public class PTEID_Address : PTEID_XMLDoc {
  private HandleRef swigCPtr;

  internal PTEID_Address(IntPtr cPtr, bool cMemoryOwn) : base(pteidlib_dotNetPINVOKE.PTEID_AddressUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(PTEID_Address obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~PTEID_Address() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if(swigCPtr.Handle != IntPtr.Zero && swigCMemOwn) {
        swigCMemOwn = false;
        pteidlib_dotNetPINVOKE.delete_PTEID_Address(swigCPtr);
      }
      swigCPtr = new HandleRef(null, IntPtr.Zero);
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public string getMunicipality() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getMunicipality(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getDistrict() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getDistrict(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getStreetName() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getStreetName(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getCivilParish() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getCivilParish(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getStreetType1() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getStreetType1(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getStreetType2() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getStreetType2(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getBuildingType1() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getBuildingType1(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getBuildingType2() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getBuildingType2(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getDoorNo() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getDoorNo(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getFloor() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getFloor(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getSide() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getSide(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getLocality() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getLocality(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getPlace() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getPlace(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getZip4() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getZip4(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getZip3() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getZip3(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string getPostalLocality() {
    string ret = pteidlib_dotNetPINVOKE.PTEID_Address_getPostalLocality(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

}

}
