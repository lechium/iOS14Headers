/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StorageSettings/StorageSettings-Structs.h>
@class PSSpecifier, NSString, UIImage;

@interface STStorageTip : NSObject {

	PSSpecifier* _infoSpecifier;
	os_unfair_lock_s _specLock;
	NSString* _identifier;
	PSSpecifier* _specifier;

}

@property (retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (retain) PSSpecifier * specifier;                              //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * infoSpecifier;              //@synthesize infoSpecifier=_infoSpecifier - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * infoText; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) long long size; 
@property (nonatomic,retain) NSString * representedApp; 
-(void)reload;
-(NSString *)identifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)setRepresentedApp:(NSString *)arg1 ;
-(void)setInfoText:(NSString *)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSize:(long long)arg1 ;
-(UIImage *)icon;
-(id)init;
-(long long)size;
-(NSString *)infoText;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(PSSpecifier *)infoSpecifier;
-(void)_reload:(id)arg1 ;
-(NSString *)representedApp;
@end
