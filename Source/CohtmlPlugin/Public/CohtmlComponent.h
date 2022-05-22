#pragma once
#include "CoreMinimal.h"
#include "CohtmlBaseComponent.h"
#include "CohtmlComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCohtmlComponent : public UCohtmlBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ManualTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PrimitiveName;
    
    UCohtmlComponent();
};

