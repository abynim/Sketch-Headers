#import "NSObject.h"

@class NSArray, PDFFunction;

@interface PDFPattern : NSObject
{
    unsigned long long _shadingType;
    PDFFunction *_function;
    id _space;
    NSArray *_coords;
}

+ (id)patternWithResource:(id)arg1;
@property(retain, nonatomic) NSArray *coords; // @synthesize coords=_coords;
@property(retain, nonatomic) id space; // @synthesize space=_space;
@property(retain, nonatomic) PDFFunction *function; // @synthesize function=_function;
@property(nonatomic) unsigned long long shadingType; // @synthesize shadingType=_shadingType;
- (void).cxx_destruct;
- (void)setupFromDictionary:(id)arg1;
- (void)setupFromStream:(id)arg1;
- (id)initWithResource:(id)arg1;

@end

