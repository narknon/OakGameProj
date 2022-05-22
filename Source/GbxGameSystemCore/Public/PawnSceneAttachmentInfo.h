#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnSceneAttachmentInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPawnSceneAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAttachToBaseOwner;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainWorldLocation;
    
    UPROPERTY(EditAnywhere)
    bool bApplyMeshOffset;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector AttachOffset;
    
    UPROPERTY(EditAnywhere)
    bool bAddOffsetFromSocket;
    
    UPROPERTY(EditAnywhere)
    FName SocketNameForAdditionalOffset;
    
    FPawnSceneAttachmentInfo();
};

