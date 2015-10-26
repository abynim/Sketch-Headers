#import "NSObject.h"

@class MSColor, NSString;

@interface MSColorCounter : NSObject
{
    MSColor *_color;
    unsigned long long _fillCount;
    unsigned long long _borderCount;
    unsigned long long _shadowCount;
    unsigned long long _textCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long long textCount; // @synthesize textCount=_textCount;
@property(nonatomic) unsigned long long shadowCount; // @synthesize shadowCount=_shadowCount;
@property(nonatomic) unsigned long long borderCount; // @synthesize borderCount=_borderCount;
@property(nonatomic) unsigned long long fillCount; // @synthesize fillCount=_fillCount;
@property(retain, nonatomic) MSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long totalCount;
- (long long)compare:(id)arg1;
- (void)countSource:(id)arg1;

@end

