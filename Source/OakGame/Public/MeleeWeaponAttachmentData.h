#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MeleeWeaponAttachmentData.generated.h"

class UGbxCustomizationTargetData;
class UStaticMesh;
class UGbxStaticMeshComponent;

USTRUCT(BlueprintType)
struct FMeleeWeaponAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationTargetData*> CustomizationTargets;
    
    UPROPERTY(Export, Transient)
    UGbxStaticMeshComponent* Component;
    
    OAKGAME_API FMeleeWeaponAttachmentData();
};

