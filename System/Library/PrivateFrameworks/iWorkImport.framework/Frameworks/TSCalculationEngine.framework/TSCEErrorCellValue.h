/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <TSCalculationEngine/TSCECellValue.h>

@interface TSCEErrorCellValue : TSCECellValue {

	TSCEErrorValue* _errorValue;

}
-(id)format;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)displayString;
-(id)description;
-(TSCEErrorValue*)errorValue;
-(void)encodeToArchive:(ErrorCellValueArchive*)arg1 ;
-(TSCEValue*)tsceValue;
-(id)canonicalKeyString;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initWithArchive:(const ErrorCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithErrorValue:(TSCEErrorValue*)arg1 locale:(id)arg2 ;
@end
