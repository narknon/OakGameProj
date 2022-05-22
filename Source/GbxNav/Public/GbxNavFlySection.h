#pragma once
#include "CoreMinimal.h"
#include "GbxNavSection.h"
#include "GbxNavFlySection.generated.h"

class UGbxNavFlySectionComponent;

UCLASS()
class GBXNAV_API AGbxNavFlySection : public AGbxNavSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UGbxNavFlySectionComponent* FlySectionComponent;
    
public:
    AGbxNavFlySection();
};

