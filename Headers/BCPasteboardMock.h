#import "NSObject.h"

@class NSMutableDictionary;

@interface BCPasteboardMock : NSObject
{
    NSMutableDictionary *_storage;
}

+ (id)generalPasteboard;
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)types;
- (id)availableTypeFromArray:(id)arg1;
- (id)propertyListForType:(id)arg1;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (id)stringForType:(id)arg1;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (id)dataForType:(id)arg1;
- (void)setData:(id)arg1 forType:(id)arg2;
- (void)declareTypes:(id)arg1 owner:(id)arg2;
- (id)init;

@end

