#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VendingMachineSocketLocationAndOffset.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FVendingMachineSocketLocationAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    FVector2D OffsetSplitScreen;
    
    FVendingMachineSocketLocationAndOffset();
};

