#import "MSActionValidation.h"

@interface MSExclusiveOrActionValidation : MSActionValidation
{
    MSActionValidation *_orValidation;
}

@property(retain, nonatomic) MSActionValidation *orValidation; // @synthesize orValidation=_orValidation;
- (void).cxx_destruct;
- (void)addValidation:(id)arg1;
- (BOOL)validateWithDelegate:(id)arg1 handler:(id)arg2;

@end

