#import "CHSingletonObject.h"

@class NSArray, NSMutableArray;

@interface MSPatternFactory : CHSingletonObject
{
    NSMutableArray *_patternCache;
    NSArray *_directoryContents;
}

@property(retain, nonatomic) NSArray *directoryContents; // @synthesize directoryContents=_directoryContents;
@property(retain, nonatomic) NSMutableArray *patternCache; // @synthesize patternCache=_patternCache;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;
- (void)addPatternImage:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)patternImageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPatternImages;
- (id)savePath;
- (void)resetCache;
- (id)init;

@end

