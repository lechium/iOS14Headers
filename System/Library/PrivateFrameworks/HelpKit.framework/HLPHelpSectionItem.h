/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem {

	BOOL _open;
	NSArray* _children;

}

@property (assign,getter=isOpen,nonatomic) BOOL open;              //@synthesize open=_open - In the implementation block
@property (nonatomic,copy) NSArray * children;                     //@synthesize children=_children - In the implementation block
-(BOOL)isOpen;
-(NSArray *)children;
-(void)setOpen:(BOOL)arg1 ;
-(id)debugDescription;
-(void)setChildren:(NSArray *)arg1 ;
@end

