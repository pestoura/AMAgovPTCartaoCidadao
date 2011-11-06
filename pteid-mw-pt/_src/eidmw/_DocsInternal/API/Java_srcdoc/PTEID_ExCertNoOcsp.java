/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.35
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package be.portugal.eid;

/******************************************************************************//**
  * Exception class Certificate No OCSP responder (error code = EIDMW_ERR_CERT_NOOCSP)
  *
  *	Thrown when asked for the OCSP response when there is no responder
  * Used in : - PTEID_Certificate.getOcspResponse()
  *********************************************************************************/
public class PTEID_ExCertNoOcsp extends PTEID_Exception {
  private long swigCPtr;

  protected PTEID_ExCertNoOcsp(long cPtr, boolean cMemoryOwn) {
    super(pteidlibJava_WrapperJNI.SWIGPTEID_ExCertNoOcspUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(PTEID_ExCertNoOcsp obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if(swigCPtr != 0 && swigCMemOwn) {
      swigCMemOwn = false;
      pteidlibJava_WrapperJNI.delete_PTEID_ExCertNoOcsp(swigCPtr);
    }
    swigCPtr = 0;
    super.delete();
  }

	/** Constructor */
  public PTEID_ExCertNoOcsp() {
    this(pteidlibJava_WrapperJNI.new_PTEID_ExCertNoOcsp(), true);
  }

}
