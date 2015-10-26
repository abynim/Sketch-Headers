#import "NSObject.h"

@class NSArray;

@interface MSFontList : NSObject
{
    unsigned long long _cachingIndex;
    NSArray *_commonFonts;
    NSArray *_systemFonts;
    NSArray *_allFonts;
    NSArray *_filterFonts;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *filterFonts; // @synthesize filterFonts=_filterFonts;
@property(retain, nonatomic) NSArray *allFonts; // @synthesize allFonts=_allFonts;
@property(retain, nonatomic) NSArray *systemFonts; // @synthesize systemFonts=_systemFonts;
@property(retain, nonatomic) NSArray *commonFonts; // @synthesize commonFonts=_commonFonts;
- (void).cxx_destruct;
- (void)prepareForDealloc;
- (void)stopCachingFonts;
- (void)dispatchStartCachingFonts;
- (void)startCachingFonts;
- (void)clearFilter;
- (void)filter:(id)arg1;
- (id)fontForFontAtIndex:(unsigned long long)arg1;
- (id)nameOfFontAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFonts;
- (void)findCommonFontsInDocument:(id)arg1;
- (void)findSystemFonts;
- (void)prepareList:(id)arg1;

@end

