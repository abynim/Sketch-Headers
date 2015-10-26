#import "NSObject.h"

@interface ZKCDTrailer64Locator : NSObject
{
    unsigned int _magicNumber;
    unsigned int _diskNumberWithStartOfCentralDirectory;
    unsigned int _numberOfDisks;
    unsigned long long _offsetOfStartOfCentralDirectoryTrailer64;
}

+ (id)recordWithArchivePath:(id)arg1 andCDTrailerLength:(unsigned long long)arg2;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property unsigned int numberOfDisks; // @synthesize numberOfDisks=_numberOfDisks;
@property unsigned long long offsetOfStartOfCentralDirectoryTrailer64; // @synthesize offsetOfStartOfCentralDirectoryTrailer64=_offsetOfStartOfCentralDirectoryTrailer64;
@property unsigned int diskNumberWithStartOfCentralDirectory; // @synthesize diskNumberWithStartOfCentralDirectory=_diskNumberWithStartOfCentralDirectory;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (id)description;
- (unsigned long long)length;
- (id)data;
- (id)init;

@end

