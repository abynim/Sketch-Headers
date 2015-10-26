#import "NSObject.h"

@class NSMutableSet, NSNumber, NSString;

@interface ECLogChannel : NSObject
{
    BOOL _enabled;
    BOOL _setup;
    int _context;
    NSNumber *_level;
    NSString *_name;
    NSMutableSet *_handlers;
}

+ (id)cleanName:(const char *)arg1;
@property(retain, nonatomic) NSMutableSet *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(nonatomic) BOOL setup; // @synthesize setup=_setup;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)selectHandlerWithIndex:(unsigned long long)arg1;
- (BOOL)tickHandlerWithIndex:(unsigned long long)arg1;
- (void)selectFlagWithIndex:(unsigned long long)arg1;
- (BOOL)tickFlagWithIndex:(unsigned long long)arg1;
- (id)stringFromContext:(CDStruct_5b5d1a5d *)arg1;
- (id)fileFromContext:(CDStruct_5b5d1a5d *)arg1;
- (BOOL)showContext:(int)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (BOOL)isHandlerEnabled:(id)arg1;
- (void)disableHandler:(id)arg1;
- (void)enableHandler:(id)arg1;
- (void)disable;
- (void)enable;
- (id)initWithName:(id)arg1;

@end

