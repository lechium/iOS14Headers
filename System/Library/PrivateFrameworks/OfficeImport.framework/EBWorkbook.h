/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBWorkbook : NSObject
+(id)readWithState:(id)arg1 reader:(id)arg2 ;
+(void)readDocumentProperties:(id)arg1 state:(id)arg2 ;
+(void)readDocumentPresentation:(id)arg1 state:(id)arg2 ;
+(ChVector<OcText>*)createSheetNamesFromWorkbook:(id)arg1 ;
+(int)xlSheetTypeEnumFromEDSheet:(id)arg1 ;
+(void)setupProcessors:(id)arg1 ;
@end
