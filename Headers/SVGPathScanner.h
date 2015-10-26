#import "NSObject.h"

@class NSCharacterSet, NSScanner, NSString;

@interface SVGPathScanner : NSObject
{
    NSScanner *_scanner;
    NSCharacterSet *_number;
    NSString *_commandBuffer;
    unsigned long long _commandPosition;
}

@property(nonatomic) unsigned long long commandPosition; // @synthesize commandPosition=_commandPosition;
@property(retain, nonatomic) NSString *commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(retain, nonatomic) NSCharacterSet *number; // @synthesize number=_number;
@property(retain, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;
- (void).cxx_destruct;
- (double)nextFloat;
- (BOOL)nextCommand;
- (id)initWithString:(id)arg1;

@end

