#pragma once
#include "CoreMinimal.h"
#include "SDUCaseSpawner.generated.h"

class UOakSDUData;
class UStaticMesh;
class USocketComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UTextRenderComponent;

USTRUCT(BlueprintType)
struct OAKGAME_API FSDUCaseSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AttachmentSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UOakSDUData* SDUData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* DisplayMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NextSDULeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NextSDURight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NextSDUUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NextSDUDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSoldOut;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USocketComponent* AttachmentSocket;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USocketComponent* CameraSocket;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UStaticMeshComponent* DisplayMeshComponent;
    
    UPROPERTY(Export)
    UTextRenderComponent* TextRenderComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UBoxComponent* MouseCollisionComponent;
    
    FSDUCaseSpawner();
};

