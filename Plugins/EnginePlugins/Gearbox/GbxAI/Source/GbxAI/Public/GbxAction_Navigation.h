#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "UObject/NoExportTypes.h"
#include "GbxAction_Navigation.generated.h"

UCLASS(Abstract)
class GBXAI_API UGbxAction_Navigation : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bMaintainRootVelocity;
    
public:
    UGbxAction_Navigation();
private:
    UFUNCTION(BlueprintPure)
    FVector K2_GetExitLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector K2_GetEntryLocation() const;
    
};

