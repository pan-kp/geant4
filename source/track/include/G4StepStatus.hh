// This code implementation is the intellectual property of
// the RD44 GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4StepStatus.hh,v 2.1 1998/07/12 03:08:48 urbi Exp $
// GEANT4 tag $Name: geant4-00 $
//
//
//---------------------------------------------------------------
//
// G4StepStatus.hh
//
// Description:
//   This is an enumerator to define possible sources which
//   can define the Step length.
//
// Contact:
//   Questions and comments to this code should be sent to
//     Katsuya Amako  (e-mail: Katsuya.Amako@kek.jp)
//     Takashi Sasaki (e-mail: Takashi.Sasaki@kek.jp)
//
//---------------------------------------------------------------

#ifndef G4StepStatus_h
#define G4StepStatus_h 1

//////////////////
enum G4StepStatus
//////////////////
{
  fWorldBoundary,           
    // Step reached the world boundary
  fGeomBoundary,            
    // Step defined by a geometry boundary
  fAtRestDoItProc,          
    // Step defined by a PreStepDoItVector
  fAlongStepDoItProc,       
    // Step defined by a AlongStepDoItVector
  fPostStepDoItProc,        
    // Step defined by a PostStepDoItVector
  fUserDefinedLimit,
    // Step defined by the user Step limit in the logical volume
  fExclusivelyForcedProc,   
    // Step defined by an exclusively forced PostStepDoIt process 
  fUndefined                
    // Step not defined yet
};

#endif

