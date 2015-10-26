#import "CHSingletonObject.h"

@class NSDictionary;

@interface MSKeyBindings : CHSingletonObject
{
    NSDictionary *_keyBindings;
}

+ (unsigned short)keyBindingsFromAction:(SEL)arg1;
+ (unsigned short)keyBindingForPreviewAtActualSize;
@property(retain, nonatomic) NSDictionary *keyBindings; // @synthesize keyBindings=_keyBindings;
- (void).cxx_destruct;
- (void)copyKeyBindingsToLibraryIfNecessary;
- (id)presetsPath;
- (id)init;

@end

