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

/// <summary>Abstract base class for Smart card</summary> 
public class PTEID_SmartCard : PTEID_Card {
  private HandleRef swigCPtr;

  internal PTEID_SmartCard(IntPtr cPtr, bool cMemoryOwn) : base(pteidlib_dotNetPINVOKE.PTEID_SmartCardUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(PTEID_SmartCard obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~PTEID_SmartCard() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if(swigCPtr.Handle != IntPtr.Zero && swigCMemOwn) {
        swigCMemOwn = false;
        pteidlib_dotNetPINVOKE.delete_PTEID_SmartCard(swigCPtr);
      }
      swigCPtr = new HandleRef(null, IntPtr.Zero);
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  /// <summary>Select an application from the card.</summary>
  public void selectApplication(PTEID_ByteArray applicationId)
  {
    pteidlib_dotNetPINVOKE.PTEID_SmartCard_selectApplication(swigCPtr, PTEID_ByteArray.getCPtr(applicationId));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
  }

  /// <summary>Send an APDU command to the card and get the result.</summary>
  /// <param name="cmd">is the apdu command </param> 
  /// <param name="pin">is the pin to ask for writing</param>   
  /// <param name="csPinCode">is the code of the pin (it will be asked if needed and not set)</param>
  /// <returns>a PTEID_ByteArray containing the result</returns>   
  public virtual PTEID_ByteArray sendAPDU(PTEID_ByteArray cmd, PTEID_Pin pin, string csPinCode)
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_sendAPDU__SWIG_0(swigCPtr, PTEID_ByteArray.getCPtr(cmd), PTEID_Pin.getCPtr(pin), csPinCode), true);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Send an APDU command to the card and get the result.</summary>
  /// <param name="cmd">is the apdu command </param> 
  /// <param name="pin">is the pin to ask for writing</param>   
  /// <returns>a PTEID_ByteArray containing the result</returns>   
  public virtual PTEID_ByteArray sendAPDU(PTEID_ByteArray cmd, PTEID_Pin pin)
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_sendAPDU__SWIG_1(swigCPtr, PTEID_ByteArray.getCPtr(cmd), PTEID_Pin.getCPtr(pin)), true);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Send an APDU command to the card and get the result.</summary>
  /// <param name="cmd">is the apdu command</param> 
  /// <returns>a PTEID_ByteArray containing the result</returns>   
  public override PTEID_ByteArray sendAPDU(PTEID_ByteArray cmd)
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_sendAPDU__SWIG_2(swigCPtr, PTEID_ByteArray.getCPtr(cmd)), true);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Read a File from the card.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">return the file</param> 
  /// <param name="pin">is the pin to ask for reading</param>  
  /// <param name="csPinCode"> is the code of the pin (it will be asked if needed and not set)</param> 
  public virtual int readFile(string fileID, PTEID_ByteArray arg1, PTEID_Pin pin, string csPinCode)
  {
    int ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_readFile__SWIG_0(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1), PTEID_Pin.getCPtr(pin), csPinCode);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Read a File from the card.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">return the file</param> 
  /// <param name="pin">is the pin to ask for reading</param>  
  public virtual int readFile(string fileID, PTEID_ByteArray arg1, PTEID_Pin pin)
  {
    int ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_readFile__SWIG_1(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1), PTEID_Pin.getCPtr(pin));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Read a File from the card.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">return the file</param> 
  public virtual int readFile(string fileID, PTEID_ByteArray arg1)
  {
    int ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_readFile__SWIG_2(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Write a file to the card.
  /// Throw PTEID_ExCmdNotAllowed exception you're not allowed to write the file.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">contents the bytes to write</param>
  /// <param name="pin">pin is the pin to ask for writing</param> 
  /// <param name="csPinCode">is the code of the pin (it will be asked if needed and not set)</param>  
  public virtual bool writeFile(string fileID, PTEID_ByteArray arg1, PTEID_Pin pin, string csPinCode)
  {
    bool ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_writeFile__SWIG_0(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1), PTEID_Pin.getCPtr(pin), csPinCode);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Write a file to the card.
  /// Throw PTEID_ExCmdNotAllowed exception you're not allowed to write the file.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">contents the bytes to write</param>
  /// <param name="pin">pin is the pin to ask for writing</param> 
  public virtual bool writeFile(string fileID, PTEID_ByteArray arg1, PTEID_Pin pin)
  {
    bool ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_writeFile__SWIG_1(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1), PTEID_Pin.getCPtr(pin));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary> 
  /// Write a file to the card.
  /// Throw PTEID_ExCmdNotAllowed exception you're not allowed to write the file.
  /// If no pin is passed and a pin is needed by the card, the pin code will be asked anyway.
  /// </summary>
  /// <param name="fileID">is the path of the file</param>   
  /// <param name="arg1">contents the bytes to write</param>
  public override bool writeFile(string fileID, PTEID_ByteArray arg1)
  {
    bool ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_writeFile__SWIG_2(swigCPtr, fileID, PTEID_ByteArray.getCPtr(arg1));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return the number of pin on the card.</summary>
  public virtual uint pinCount()
  {
    uint ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_pinCount(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return an object to access all the pins on the card.</summary>
  public virtual PTEID_Pins getPins()
  {
    PTEID_Pins ret = new PTEID_Pins(pteidlib_dotNetPINVOKE.PTEID_SmartCard_getPins(swigCPtr), false);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return the number of certificate on the card.</summary>
  public virtual uint certificateCount()
  {
    uint ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_certificateCount(swigCPtr);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return an object to access all the certificates on the card.</summary>
  public virtual PTEID_Certificates getCertificates()
  {
    PTEID_Certificates ret = new PTEID_Certificates(pteidlib_dotNetPINVOKE.PTEID_SmartCard_getCertificates(swigCPtr), false);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return the challenge.</summary>
  /// <param name="bForceNewInit">force a new initialization of the couple challenge/response</param>  
  public virtual PTEID_ByteArray getChallenge(bool bForceNewInit)
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_getChallenge__SWIG_0(swigCPtr, bForceNewInit), false);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return the challenge.</summary>
  public virtual PTEID_ByteArray getChallenge()
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_getChallenge__SWIG_1(swigCPtr), false);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>Return the response to the challenge.</summary>
  public virtual PTEID_ByteArray getChallengeResponse()
  {
    PTEID_ByteArray ret = new PTEID_ByteArray(pteidlib_dotNetPINVOKE.PTEID_SmartCard_getChallengeResponse(swigCPtr), false);
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  /// <summary>
  /// Return true if the response of the card to the given challenge is the same as the response expected.
  /// For virtual card (from file), always return false.
  /// </summary>
  /// <param name="challenge">is the challenge to check</param>  
  /// <param name="response">is the response expected from the card</param>  
  public virtual bool verifyChallengeResponse(PTEID_ByteArray challenge, PTEID_ByteArray response)
  {
    bool ret = pteidlib_dotNetPINVOKE.PTEID_SmartCard_verifyChallengeResponse(swigCPtr, PTEID_ByteArray.getCPtr(challenge), PTEID_ByteArray.getCPtr(response));
    if (pteidlib_dotNetPINVOKE.SWIGPendingException.Pending) throw pteidlib_dotNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

}

}
