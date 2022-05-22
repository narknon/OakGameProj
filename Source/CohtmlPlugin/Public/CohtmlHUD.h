#pragma once
#include "CoreMinimal.h"
#include "CohtmlBaseComponent.h"
#include "UObject/NoExportTypes.h"
#include "CohtmlHUD.generated.h"

class UMaterialInstanceDynamic;
class UMaterial;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCohtmlHUD : public UCohtmlBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath HUDMaterialName;
    
    UPROPERTY()
    UMaterial* HUDMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* HUDMaterialInstance;
    
    UCohtmlHUD();
};

