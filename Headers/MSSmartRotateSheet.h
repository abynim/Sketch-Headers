#import "CHSheetController.h"

@class NSTextField;

@interface MSSmartRotateSheet : CHSheetController
{
    NSTextField *_explanationLabel;
    long long _numberOfCopies;
}

@property(nonatomic) long long numberOfCopies; // @synthesize numberOfCopies=_numberOfCopies;
@property(retain, nonatomic) NSTextField *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
- (void).cxx_destruct;
- (id)doc;
- (void)setNilValueForKey:(id)arg1;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;

@end

