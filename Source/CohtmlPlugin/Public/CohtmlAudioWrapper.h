#pragma once
#include "CoreMinimal.h"
#include "CohtmlSound.h"
#include "UObject/Object.h"
#include "CohtmlAudioWrapper.generated.h"

UCLASS()
class UCohtmlAudioWrapper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UObject* Owner;
    
    UPROPERTY()
    TMap<int32, FCohtmlSound> Sounds;
    
public:
    UCohtmlAudioWrapper();
};

