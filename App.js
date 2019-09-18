/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import {
  StyleSheet,
  View,
  Text,
  FlatList
} from 'react-native';


import FeedbackModal from './components/FeedbackModal'

class App extends Component  {
    constructor() {
        super();
        const feedback = [];
        this.state = {
            modalVisible: false,
            feedback
        }
        this.toggleMyModal = this.toggleMyModal.bind(this);
        this.newFeedback = this.newFeedback.bind(this);

    }

    toggleMyModal = () => {
        if(this.myModal){
            this.myModal.toggleModal();
        }
    }

    newFeedback(text) {
        const feedback = [
            ...this.state.feedback,
            text
        ];
        this.setState({ feedback })
    }
    render() {
        return (
            <View style={styles.container}>
                <View style={styles.myButton}>
                    <Text style={{color: 'white'}} onPress={this.toggleMyModal}>Feedback</Text>
                </View>
                <FlatList style={styles.viewContainer}
                          data={this.state.feedback} renderItem={({item}) => (
                    <Text>{item}</Text>
                )}
                keyExtractor={item => item}>

                </FlatList>
                <FeedbackModal ref={ref => {
                    this.myModal = ref;
                }} onNewFeedback={this.newFeedback}/>
            </View>

        );
    }
};

const styles = StyleSheet.create({
    viewContainer: {
        flex: 1,
        paddingTop: 32,
        alignSelf: 'flex-start'
    },
    container: {
        flex: 1,
        margin: 25,
        justifyContent: 'flex-start',
        alignItems: 'flex-end',
        backgroundColor: '#fff',
    },
    myButton:{
        padding: 15,
        borderRadius:20,
        backgroundColor:'#23b11b',
    }
});

export default App;
