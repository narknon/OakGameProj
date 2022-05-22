#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CohTextureUserWrapData.generated.h"

class UTexture;

UCLASS()
class COHERENTRENDERINGPLUGIN_API UCohTextureUserWrapData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTexture* Texture;
    
public:
    UCohTextureUserWrapData();
};

