#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "OakGenderData.generated.h"

class USkeletalMesh;
class UDialogNameTag;
class UGestaltPartListData;
class UGbxAnimSet;
class UAnimInstance;
class UMaterialInstance;
class UDestructibleMesh;

USTRUCT(BlueprintType)
struct FOakGenderData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FVector MeshOffset;
    
    UPROPERTY(EditAnywhere)
    UGestaltPartListData* GestaltPartList;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> AnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AnimSetGenericNames_Enable;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AnimSetGenericNames_Disable;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAnimSet*> AnimSets_Enable;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAnimSet*> AnimSets_Disable;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInstance*> Materials;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogNameTag*> DialogNameTags;
    
    UPROPERTY(EditAnywhere)
    UDestructibleMesh* CryoMesh;
    
    UPROPERTY(EditAnywhere)
    int32 GoreSourceMaterialIndex;
    
    OAKGAME_API FOakGenderData();
};

