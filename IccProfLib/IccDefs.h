/** @file
    File:       IccDefs.h  

    Contains:   Access ICC profile definitions and structures including
                Version 4 extensions

    Copyright:  � see ICC Software License
 */

/*
 * The ICC Software License, Version 0.1
 *
 *
 * Copyright (c) 2003-2006 The International Color Consortium. All rights 
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:  
 *       "This product includes software developed by the
 *        The International Color Consortium (www.color.org)"
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. In the absence of prior written permission, the names "ICC" and "The
 *    International Color Consortium" must not be used to imply that the
 *    ICC organization endorses or promotes products derived from this
 *    software.
 *
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE INTERNATIONAL COLOR CONSORTIUM OR
 * ITS CONTRIBUTING MEMBERS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the The International Color Consortium. 
 *
 *
 * Membership in the ICC is encouraged when this software is used for
 * commercial purposes. 
 *
 *  
 * For more information on The International Color Consortium, please
 * see <http://www.color.org/>.
 *  
 * 
 */


 

/* Header file guard bands */
#ifndef _ICCDEFS_H
#define _ICCDEFS_H

#pragma pack(4)

//Get any platform specific prototypes
#include "IccProfLibConf.h"

#ifdef USESAMPLEICCNAMESPACE
namespace sampleICC {
#endif

//Include the standard icProfileHeader definition file
#include "icProfileHeader.h"

// Define signature for SampleICC's use
#define icSigSampleICC ((icSignature)0x53494343) /* 'SICC' */

//Definitions used for conversion of fixed floating point numbers
typedef icUInt16Number icU1Fixed15Number;
typedef icUInt16Number icU8Fixed8Number;

/**
* All floating point operations/variables in IccProfLib use the icFloatNumber data type.
* It was found that using float instead of double increased performance.  Changing
* the definition to double will add greater precision at the cost of performance.
*/
typedef float              icFloatNumber;

/** String formating macros need to match precision of icFloatNumber
*If precision is double change the "f" below to "lf"
*/
#define ICFLOATSFX "f"
#define ICFLOATFMT "%f"

/* For string operations */
typedef char                icChar;

/* Validation Status values */
typedef enum {
  icValidateOK,              /*Profile is valid and conforms to specification*/
  icValidateWarning,         /*Profile conforms to specification with concerns*/ 
  icValidateNonCompliant,    /*Profile does not conform to specification, but may still be useable*/
  icValidateCriticalError,   /*Profile does not conform to specification and is not useable*/
} icValidateStatus;


#pragma pack()

#ifdef USESAMPLEICCNAMESPACE
} //namespace sampleICC
#endif

#endif /* _ICCDEFS_H */



