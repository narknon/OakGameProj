#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GFxPCTextChatBufferDelegateDelegate.h"
#include "GFxPCTextChatBuffer.generated.h"

UCLASS()
class OAKGAME_API UGFxPCTextChatBuffer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxPCTextChatBufferDelegate OnTextLogChangedDelegate;
    
    UGFxPCTextChatBuffer();
};

