#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplicatedCameraModeState.h"
#include "UObject/NoExportTypes.h"
#include "CameraModesManager.generated.h"

class UCameraState;
class UCameraModeSet;
class UCameraMode;
class UCameraInputs;

UCLASS(DefaultConfig)
class GBXCAMERAMODES_API UCameraModesManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bIsClient;
    
    UPROPERTY(Transient)
    bool bIsRemote;
    
protected:
    UPROPERTY(Transient)
    FReplicatedCameraModeState ReplicatedModeState;
    
    UPROPERTY(Transient)
    bool bRemoteIsFirstPerson;
    
    UPROPERTY(Transient)
    TArray<FName> ModeNameStack;
    
    UPROPERTY(Transient)
    UCameraMode* CurrentMode;
    
    UPROPERTY(Transient)
    TArray<UCameraModeSet*> ModeSets;
    
    UPROPERTY(Transient)
    UCameraInputs* Inputs;
    
    UPROPERTY(Transient)
    UCameraState* State;
    
private:
    UPROPERTY(GlobalConfig)
    FSoftClassPath CameraStateClassName;
    
    UPROPERTY(GlobalConfig)
    FSoftClassPath CameraInputsClassName;
    
public:
    UCameraModesManager();
};

