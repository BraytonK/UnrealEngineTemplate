#include "TestActor.h"

#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

#include "Log.h"

ATestActor::ATestActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    Value = 42;

    // TODO understand scene components
      // "A SceneComponent has a transform and supports attachment, but has no rendering or collision capabilities"
      // To understand more on components and scene components visit: https://unrealcommunity.wiki/component-uxhizejm
    RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("RootComponent"));

    // TODO understand billboard objects more
      // A Billboard object is a 2d component that faces the camera at all times?
    Sprite = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this, TEXT("Sprite"));
    Sprite->SetupAttachment(RootComponent);
}

void ATestActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogBraytonTemplate, Log, TEXT("%s: on BeginPlay, Value is %d"), *GetName(), Value);
}
