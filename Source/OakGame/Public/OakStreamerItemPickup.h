#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItemPickup.h"
#include "DonorInfo.h"
#include "OakStreamerItemPickup.generated.h"

class UUIStatData;

UCLASS()
class OAKGAME_API AOakStreamerItemPickup : public AOakInventoryItemPickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    FString FirstDonor;
    
    UPROPERTY(Replicated, Transient)
    FDonorInfo LargestDonor;
    
public:
    UPROPERTY(EditAnywhere)
    UUIStatData* FirstDonorStatData;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* LargestDonorStatData;
    
    UPROPERTY(EditAnywhere)
    FString DonorTextHTMLColor;
    
    AOakStreamerItemPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

