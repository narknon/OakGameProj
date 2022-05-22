#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerIconInfo.generated.h"

class AOakPlayerState;
class AOakCharacter_Player;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPlayerIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AOakPlayerState* AssociatedPlayer;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* AssociatedCharacter;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* PlayerIconMesh;
    
    UPROPERTY(Transient)
    FVector LastPlayerLocation;
    
    UPROPERTY(Transient)
    FRotator LastPlayerRotation;
    
    OAKGAME_API FPlayerIconInfo();
};

