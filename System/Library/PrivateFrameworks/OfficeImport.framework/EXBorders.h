/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXBorders : NSObject
+(id)edBorderFromXmlElement:(xmlNode*)arg1 diagonalType:(int)arg2 state:(id)arg3 ;
+(int)edDiagStyleFromXmlElement:(xmlNode*)arg1 ;
+(id)borderStyleEnumMap;
+(id)edBordersFromXmlBordersElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edBorderStyleFromXmlBorderStyleString:(id)arg1 ;
@end
