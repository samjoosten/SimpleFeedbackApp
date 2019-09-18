import React, {Component} from 'react';
import {Modal, Text, TouchableHighlight, View, Alert, TextInput, StyleSheet, Dimensions} from 'react-native';
import PropTypes from 'prop-types'

class FeedbackModal extends Component {
    constructor() {
        super();
        this.state = {
            modalVisible: false,
            text: ''
        };
        this.submit = this.submit.bind(this);

    }



    toggleModal = () => {
        this.setState({modalVisible: !this.state.modalVisible});
    }

    submit() {
        this.setState({modalVisible: false});
        this.props.onNewFeedback(this.state.text);
        this.setState({text: ''})
    }

    render() {
        return (
            <View style={{marginTop: 22}}>
                <Modal
                    animationType="slide"
                    transparent={false}
                    visible={this.state.modalVisible}
                    onBackdropPress={() => {
                        this.toggleModal();
                    }}>
                    <View style={styles.container}>
                        <View>
                            <Text style={styles.modalHeader}>Give us your thougths!</Text>

                            <TextInput style={styles.txtInput}
                                       numberOfLines = {4}
                                       multiline={true} onChangeText={(text) => this.setState({text})}
                                       value={this.state.text}/>

                            <TouchableHighlight style={[styles.button, {backgroundColor: '#0984e3'}]}
                                onPress={this.submit}
                                underlayColor="#74b9ff">
                                <Text style={styles.btnText}>Submit!</Text>
                            </TouchableHighlight>
                            <TouchableHighlight style={[styles.button, {backgroundColor: '#d63031'}]}
                                                onPress={() => {
                                                    this.setState({modalVisible: false})
                                                }}
                                                underlayColor="#74b9ff">
                                <Text style={styles.btnText}>Close</Text>
                            </TouchableHighlight>
                        </View>
                    </View>
                </Modal>
            </View>
        );
    }
}

FeedbackModal.propTypes = {
    onNewFeedback: PropTypes.func
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        flexDirection: 'row',
        justifyContent: 'center',
        marginTop: 35
    },
    modalHeader: {
        fontSize: 30,
        marginBottom: 20,
        textAlign: 'center'
    },
    txtInput: {
        borderColor: 'gray',
        borderWidth: 1,
        borderRadius: 10,
        padding: 5,
        margin: 5,
        width: Dimensions.get('window').width - 50,
        height: 100
    },
    button: {
        margin: 5,
        padding: 10,
        alignItems: 'center',
        justifyContent: 'center',
        borderRadius: 10,
    },
    btnText: {
        textAlign: 'center',
        fontSize: 17,
        color: 'white'
    }
})


export default FeedbackModal