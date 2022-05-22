#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FaceFXCharacter.generated.h"

class UFaceFXActor;
class UFaceFXAnim;
class UFaceFXAudioComponent;
class UFaceFXAnimSet;

UCLASS()
class FACEFX_API UFaceFXCharacter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UFaceFXActor* FaceFXActor;
    
    UPROPERTY(Export, Transient)
    UFaceFXAudioComponent* AudioComponent;
    
    UPROPERTY(Transient)
    UFaceFXAnim* CurrentAnim;
    
public:
    UPROPERTY(Transient)
    UFaceFXAnimSet* CurrentAnimSet;
    
    UFaceFXCharacter();
};

