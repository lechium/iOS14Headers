/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKPassesDataSourceObserver.h>

@protocol NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate, NPKPassesDataSource;
@class NSString;

@interface NPKValueAddedServiceAutomaticSelectionCoordinator : NSObject <NPKPassesDataSourceObserver> {

	id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> _delegate;
	id<NPKPassesDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPassesDataSource> dataSource;                                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<NPKPassesDataSource>)arg1 ;
-(id<NPKPassesDataSource>)dataSource;
-(void)setDelegate:(id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate>)arg1 ;
-(id<NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate>)delegate;
-(void)passesDataSource:(id)arg1 didAddPasses:(id)arg2 ;
-(void)passesDataSourceDidReorderPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg1 didRemovePasses:(id)arg2 ;
-(void)passesDataSource:(id)arg1 didUpdatePasses:(id)arg2 ;
-(void)passesDataSourceDidReloadPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg1 didUpdateSettingsForPass:(id)arg2 ;
-(void)_handleWalletPreferencesChanged:(id)arg1 ;
-(void)_updateAutomaticSelectionPasses;
-(id)initWithDelegate:(id)arg1 passesDataSource:(id)arg2 ;
@end

