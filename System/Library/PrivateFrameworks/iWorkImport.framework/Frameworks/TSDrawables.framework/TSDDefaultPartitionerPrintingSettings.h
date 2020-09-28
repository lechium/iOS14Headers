/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDDefaultPartitionerPrintingSettings : NSObject {

	BOOL _isPrinting;
	BOOL _isDrawingIntoPDF;
	BOOL _shouldSuppressBackgrounds;

}

@property (nonatomic,readonly) BOOL isPrinting;                             //@synthesize isPrinting=_isPrinting - In the implementation block
@property (nonatomic,readonly) BOOL isDrawingIntoPDF;                       //@synthesize isDrawingIntoPDF=_isDrawingIntoPDF - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressBackgrounds;              //@synthesize shouldSuppressBackgrounds=_shouldSuppressBackgrounds - In the implementation block
-(BOOL)isPrinting;
-(id)initWithCanvas:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)isDrawingIntoPDF;
@end
