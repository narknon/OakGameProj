#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ReplicatedCameraModeState.h"
#include "CameraModesManager.generated.h"

class UCameraState;
class UCameraModeSet;
class UCameraInputs;
class UCameraMode;

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

