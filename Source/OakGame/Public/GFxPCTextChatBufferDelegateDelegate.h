#pragma once
#include "CoreMinimal.h"
#include "GFxPCTextChatBufferDelegateDelegate.generated.h"

class UGFxPCTextChatBuffer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGFxPCTextChatBufferDelegate, UGFxPCTextChatBuffer*, TextChatBuffer);

