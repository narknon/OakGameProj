#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavSectionComponent.generated.h"

class AGbxNavWorld;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavSectionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint32 SectionID;
    
    UPROPERTY()
    FGuid StreamingGuid;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(EditAnywhere)
    bool bAddAllConnectedComponentsToBounds;
    
    UPROPERTY()
    FTransform BuildTransform;
    
public:
    UGbxNavSectionComponent();
};

