#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "HavokNavObstacle.generated.h"

class UGbxNavArea;
class UPrimitiveComponent;

UCLASS(CollapseCategories, EditInlineNew)
class GBXNAV_API UHavokNavObstacle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(EditAnywhere)
    bool bUseSphere;
    
    UPROPERTY(EditAnywhere)
    FVector BoxSize;
    
    UPROPERTY(EditAnywhere)
    bool bUseBox;
    
    UPROPERTY(VisibleAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    UGbxNavArea* NavArea;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* PrimitiveBase;
    
public:
    UHavokNavObstacle();
};

