#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_AnchorToSocket.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_AnchorToSocket : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSetLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSetRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UCameraBehavior_AnchorToSocket();
};

